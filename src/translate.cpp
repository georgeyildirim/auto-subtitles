// translate.cpp — part of auto-subtitles.

#include "autosubtitles/translate.h"

#include <cstdio>

namespace autosubtitles {

Translate::Translate(const std::string& config_path)
    : config_path_(config_path) {}

void Translate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Translate::run() {
    if (verbose_) std::fprintf(stderr, "[auto-subtitles] translate: run\n");
    // core logic lives here
    return true;
}

}  // namespace autosubtitles
