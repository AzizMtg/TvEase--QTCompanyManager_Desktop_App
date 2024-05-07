
import QtQuick 2.0
import QtLocation 5.6
import QtPositioning 5.6

Rectangle {
    id: window

    property double oldLat: 34.0
    property double oldLng: 9.0
    property Component comMarker: mapMarker

    Plugin {
        id: mapPlugin
        name: "osm"
    }

    // Signal to emit latitude and longitude values
    signal coordinatesChanged(double latitude, double longitude)

    // Function to add a marker
    function addMarker(lat, lng) {
        var item = comMarker.createObject(window, {
            coordinate: QtPositioning.coordinate(lat, lng)
        });
        mapView.addMapItem(item);
    }

    // Function to find a marker near the clicked coordinates
    function findMarkerNearby(clickedCoordinate) {
        for (var i = 0; i < mapView.mapItems.length; ++i) {
            var marker = mapView.mapItems[i];
            var markerCoordinate = marker.coordinate;
            var distance = clickedCoordinate.distanceTo(markerCoordinate);

            // Adjust the threshold value as needed
            var threshold = 10; // Adjust this threshold according to your requirements

            // Check if the clicked coordinates are within the threshold distance of the marker
            if (distance < threshold) {
                return marker; // Return the marker if it's nearby
            }
        }
        return null; // Return null if no nearby marker is found
    }

    // Function to delete a marker
    function deleteMarker(marker) {
        mapView.removeMapItem(marker);
    }

    Map {
        id: mapView
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(oldLat, oldLng);
        zoomLevel: 6

        MouseArea {
            anchors.fill: parent
            onClicked: {
                var coordinate = mapView.toCoordinate(Qt.point(mouse.x, mouse.y));
                console.log("Clicked at:", coordinate.latitude, coordinate.longitude);

                // Emit signal with clicked coordinates
                coordinatesChanged(coordinate.latitude, coordinate.longitude);

                // Check if there's a marker near the clicked coordinates
                var markerToDelete = findMarkerNearby(coordinate);

                // If a marker is found nearby, delete it
                if (markerToDelete !== null) {
                    console.log("Deleting marker at:", markerToDelete.coordinate.latitude, markerToDelete.coordinate.longitude);
                    deleteMarker(markerToDelete);
                } else {
                    // If no marker is found nearby, add a new marker
                    addMarker(coordinate.latitude, coordinate.longitude);
                }
            }
        }
    }

    Component {
        id: mapMarker
        MapQuickItem {
            id: markerImg
            anchorPoint.x: image.width/4
            anchorPoint.y: image.height
            coordinate: position

            sourceItem: Image {
                id: image
                source: "http://maps.gstatic.com/mapfiles/ridefinder-images/mm_20_red.png"
            }
        }
    }
}
