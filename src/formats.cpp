// formats.cpp — part of auto-subtitles.

#include "autosubtitles/formats.h"

#include <cstdio>

namespace autosubtitles {

Formats::Formats(const std::string& config_path)
    : config_path_(config_path) {}

void Formats::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Formats::run() {
    if (verbose_) std::fprintf(stderr, "[auto-subtitles] formats: run\n");
    // core logic lives here
    return true;
}

}  // namespace autosubtitles
