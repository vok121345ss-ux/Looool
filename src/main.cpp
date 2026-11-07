
#include <Geode/Geode.hpp>

using namespace geode::prelude;

// ZBV Live
$on_mod(Loaded) {
    log::info("ZBV Live loaded!");

    Notification::create(
        "ZBV Live loaded!",
        NotificationIcon::Success
    )->show();
}
