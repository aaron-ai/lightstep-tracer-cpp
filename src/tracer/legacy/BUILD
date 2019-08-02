load(
    "//bazel:lightstep_build_system.bzl",
    "lightstep_cc_library",
    "lightstep_package",
)

lightstep_package()

lightstep_cc_library(
    name = "lightstep_span_lib",
    private_hdrs = [
        "legacy_span.h",
    ],
    srcs = [
        "legacy_span.cpp",
    ],
    deps = [
        "//src/common:logger_lib",
        "//src/common:utility_lib",
        "//src/common:random_lib",
        "//src/recorder:recorder_interface",
        "//src/tracer:lightstep_span_context_interface",
        "//src/tracer:utility_lib",
    ],
)

lightstep_cc_library(
    name = "legacy_immutable_span_context_lib",
    private_hdrs = [
        "legacy_immutable_span_context.h",
    ],
    srcs = [
        "legacy_immutable_span_context.cpp",
    ],
    deps = [
        "//src/tracer:lightstep_span_context_interface",
    ],
)

lightstep_cc_library(
    name = "legacy_tracer_impl_lib",
    private_hdrs = [
        "legacy_tracer_impl.h",
    ],
    srcs = [
        "legacy_tracer_impl.cpp",
    ],
    deps = [
        "//src/common:logger_lib",
        "//src/recorder:recorder_interface",
        ":lightstep_span_lib",
        "//src/tracer:propagation_lib",
        ":legacy_immutable_span_context_lib",
    ],
)
