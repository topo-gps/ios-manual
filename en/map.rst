.. _sec-map:

Map
===
If you start Topo GPS a map will be displayed at first. An example is shown below: 

.. figure:: _static/map1.png  
   :height: 568px
   :width: 320px
   :alt: Topo GPS main screen

   *Figure 1. The map screen of Topo GPS. The red marker indicates your current location.*

To find your location on the map you have to press the position marker icon on the bottom left of the screen.

The red marker with the arrow in Figure 1 indicates your current location on the map. 
The direction of the arrow points in the direction in which you point your device if you stand still. When you are moving, this arrow points in the direction you are moving. You can find more information about the marker in the section :ref:`sec-posmarker`.

The dark gray area at the bottom of the screen is the dashboard. In the dashboard
you will find the center button, the route button and a few counters. The
dashboard is discussed in detail in the section :ref:`dashboard <sec-dashboard>`.

The dark gray rectangle with the three dots on the upper right of the screen is a handle with which you can open the :ref:`menu <sec-menu>`.

The label on the upper left side of the map indicates the percentage offline accessible map tiles of the area that is currently displayed. You can read more in the section :ref:`Downloading maps for offline use <sec-cache>`.

On the bottom right corner of the map you can find a scale indicator. In Fig. 1, the black horizontal line indicates a distance of 200 m. Using the scale indicator you can quickly estimate the distance between two points on the map. You can determine distances more accurately using the :ref:`route planner <ss-route-plan>` in
crow fly mode.

On the bottom left corner of the map you will find the copyright
information of the current map. If you press on the label you can view
more detailed :ref:`information <ss-copyright>` and a :ref:`legend
<ss-legend>` if available.

A red circle around the position marker indicates an estimate of the accuracy of the location determination. When you do not see this circle or if you do not find it useful, you can switch it on or off in the settings.

An arrow that indicates the map north can be switched on in the settings.

.. _subsec-modify:

Modifying map screen
--------------------
You can modify the map screen by moving, zooming, centering and rotating.

Move
~~~~
To move the map you have to hold a finger on the map. When you move your finger, the map will be moved as well. You can also move the map by making a quick swipe with your finger on the map.

.. _subsec-zooming:

Zoom
~~~~
- *Zooming in:* Tap one finger on the bottom of the map. Or hold two fingers on the map and bring them together.
- *Zooming out:* Tap one finger on the top of the map. Or hold two fingers on the map and move them away from each other.

If you do not like zooming in with one tap on the bottom of the map and zooming out with one tap at the top, you can
swap this in the :ref:`settings <ss-settings-onetapzoom>`. You can also change there bottom/top into left/right.

.. _subsec-centreren:

Center
~~~~~~
By pressing the position marker symbol on the bottom left of the screen, the map will be centered around your current location. An example
is shown in the figure below.
 
.. figure:: _static/map2.png  
   :height: 568px
   :width: 320px
   :alt: Kaart centreren Topo GPS

   *Figure 2. A centered map.*

- *Move:* If you are moving, the map will stay centered automatically. The map will move with your movement.
- *Zoom in* If you zoom in by tapping on the bottom of the map, the map stays centered.
- *Zoom out:* If you zoom out by tapping on the top of the map, the map stays centered.
- *Cancel:* By dragging the map, or by zooming with two fingers the centering will be canceled.

If the location determination does not function, please check the settings of your iPhone/iPad. Go to
Settings -> Privacy -> Location -> Topo GPS.

.. _subsec-roteren:

Rotate
~~~~~~
You can rotate the map in two ways, automatic or manual. Both options are discussed below.

.. _ss-map-autorotate:

Automatic rotation
******************
By pressing once on the position marker icon on the bottom left of the screen, the icon turns into a rotation icon as you can see in Figure 2. If you press this rotation icon, the map will be rotated.

The map is then rotated such that the top of the map indicates the direction in which you point your iPhone/iPad. If you are moving the top of the map will indicate the direction in which you move. An example is shown in the figure below:

.. figure:: _static/map3.png  
   :height: 568px
   :width: 320px
   :alt: Kaart roteren Topo GPS

   *Figure 3. A rotated map.*

Rotating the map can be useful when you are following a route. Left and right on the map are than also left and right in reality. In addition the position maker will stay centered on the map.

If the map is rotated, an arrow will appear on the top left of the screen. This arrow indicates the direction of the true north on the map. If you press this arrow the rotation will be cancelled.

You can cancel rotation by pressing the position marker icon. Rotation is also canceled by pressing the north arrow.

If you move the map or zoom with two fingers automatic rotation will be switched off. The current rotation angle will then not longer changed and the map will not longer be centered at your current location.

Manual rotation
***************
If you put two fingers on the screen and make a rotation gesture, the map will be rotated around the point that lies in between the two fingers. An example of a rotated map is displayed in Fig. 3. You can rotate the map in every desired direction. 

If the map is rotated, an arrow will appear on the top left of the screen. This arrow indicates the direction of the true north on the map. If you press this arrow the rotation will be cancelled.

If you zoom the map or move the map the map stays rotated.

Manual rotation can be cancelled by pressing the north arrow. It is also possible to undo the rotation by rotating back to the normal situation.

.. _subsec-schermorientatie:

Screen orientation
~~~~~~~~~~~~~~~~~~
By rotating your device you can change the screen orientation from portrait to landscape. An example of landscape mode is displayed below:

.. figure:: _static/map4.png  
   :height: 320px
   :width: 568px
   :alt: Schermorientatie veranderen Topo GPS

   *Figure 4. Map in landscape mode.*

If you do not want the screen to rotate if you rotate your device, you can lock the
screen orientation in the :ref:`settings <ss-settings>`.

Other possibilities
-------------------

.. toctree::
   :maxdepth: 2
   
   map_offline
   map_legend

