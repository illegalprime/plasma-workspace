set(appmenuapplet_SRCS
    appmenuapplet.cpp
)

add_library(plasma_applet_appmenu MODULE ${appmenuapplet_SRCS})

kcoreaddons_desktop_to_json(plasma_applet_appmenu ../package/metadata.desktop)

target_link_libraries(plasma_applet_appmenu
                      Qt5::Widgets
                      Qt5::Quick
                      Qt5::DBus
                      KF5::Plasma
                      KF5::WindowSystem)

install(TARGETS plasma_applet_appmenu DESTINATION ${KDE_INSTALL_PLUGINDIR}/plasma/applets)
