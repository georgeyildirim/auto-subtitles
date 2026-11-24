// main.cpp — entry point. Wires config and subsystems together.

#include "autosubtitles/settings.h"
#include "autosubtitles/transcribe.h"
#include "autosubtitles/translate.h"
#include "autosubtitles/formats.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    autosubtitles::Settings settings = autosubtitles::Settings::load_default();
    autosubtitles::Transcribe transcribe(settings.store_path);
    autosubtitles::Translate translate(settings.store_path);
    autosubtitles::Formats formats(settings.store_path);
    std::fprintf(stderr, "[auto-subtitles] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
