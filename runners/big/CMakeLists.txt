add_definitions(-DTRANSLATION_DOMAIN=\"plasma_runner_big\")

set(krunner_big_SRCS
    bigrunner.cpp
)

add_library(krunner_big MODULE ${krunner_big_SRCS})
target_link_libraries(krunner_big
    KF5::KIOCore
    KF5::KIOWidgets
    KF5::I18n
    KF5::Plasma
    KF5::Runner
    KF5::Completion
    Qt5::Widgets
)

install(TARGETS krunner_big DESTINATION ${KDE_INSTALL_PLUGINDIR})
install(FILES plasma-runner-big.desktop DESTINATION ${KDE_INSTALL_KSERVICES5DIR})

