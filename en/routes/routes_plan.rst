.. _sec-route-plan:

Planning routes
---------------
Planning a route is creating a route between several locations for a means of transportation. These locations are called route points in Topo GPS. An alternative to route planning is :ref:`route generation <sec-route-generate>`.

The route planner can be opened by first opening the :ref:`routes pop-pup <sec-routes-popup>` (Menu > Routes). Then tap the 'Plan route' item. An exmaple of the route planner screen is shown below:

.. figure:: ../_static/route-plan1.png
   :height: 568px
   :width: 320px
   :alt: Route plan screen Topo GPS
   
   *The route planner with no route planned.*

In the bottom of the screen you find an overlay with a search bar and several buttons which you can use to control the route planner.

To zoom the map to your location, you can tap the position button in the bottom left of the overlay.

To undo an action you have to press the ‘Undo’ button (circle with return arrow) in the planner. You can undo all actions in the planner until the
undo button becomes light blue.

Next to the undo button, you find the more Button (circle with points). If you tap the more button a menu will appear with the following options:

- *Change map*: You can change the map of the planner with this option.
- *Add route*: This can be used to join a saved route to the planned route, or to add a saved route to the map.
- *Search*: With this option you can create a route point by entering a location name.
- *Reset*: This will reset the route planner. The planned route and the route points will disappear.

To save a planned route, you have to press :ref:`'Save' <ss-route-plan-save>` button on the top right.

You can obtain more information about the route planner, by pressing 'Planner: Copyright', in the top left of the route planner screen.

Transportation means
~~~~~~~~~~~~~~~~~~~~
To plan a route, first check the transportations means in the bottom center. In the example above, it is set to 'Pedestrian'.
By tapping 'Pedestrian' a screen will appear in which you can change the transportation means to for example bicycling, car or as the crow flies.

If you plan a route as the crow flies or over a layer, you can do this without an internet connection. 
For the other ways of transportation an internet connection is required, because the routes are calculated externally. 

Adding route points
~~~~~~~~~~~~~~~~~~~
To plan a route you need to add route points. You can add route points in three ways:

- By entering a location in the search bar of the route planner overlay.
- By pressing long on the map and dragging the icon to the desired location.
- By tapping waypoints, the position marker, or nodes from a node network.

If you have added at least two route points, a route will be computed between the route points.

Below several examples of planning routes are discussed.

.. toctree::
   :maxdepth: 2
   
   route_plan_search_bar
   route_plan_map
   route_plan_current_location
   route_plan_bicycle_node_network
   
.. _ss-route-plan-finish:

Finishing route planning
~~~~~~~~~~~~~~~~~~~~~~~~
If your are ready with planning a route, you can return to the main map by tapping '< Map' on the top left of the screen.
The planned route will then be shown on the map in the main screen, but it will not be saved. If you tap a planned route in the main screen, you will return to the route planner.

.. _ss-route-plan-save:

Saving planned route
~~~~~~~~~~~~~~~~~~~~
If you want to save a planned route tap 'Save' in the top right of the route planner screen. A screen will appear in which you can enter the details of the route as is illustrated below:

.. figure:: ../_static/route-plan-finish.png
   :height: 568px
   :width: 320px
   :alt: Route plan screen Topo GPS
   
   *Saving a planned route*

You can enter the title, author, route type, and description. You can also decide to include waypoints that are currently loaded on the map in the route. Then tap 'Save' to save the planned route. You will return to the :ref:`main screen <sec-main-screen>` and the map will be zoomed the planned route. 
