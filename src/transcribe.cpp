// transcribe.cpp — part of auto-subtitles.

#include "autosubtitles/transcribe.h"

#include <cstdio>

namespace autosubtitles {

Transcribe::Transcribe(const std::string& config_path)
    : config_path_(config_path) {}

void Transcribe::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Transcribe::run() {
    if (verbose_) std::fprintf(stderr, "[auto-subtitles] transcribe: run\n");
    // core logic lives here
    return true;
}

}  // namespace autosubtitles
