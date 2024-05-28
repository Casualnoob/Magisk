// Generated by gen_jni_hooks.py

namespace {

void *nativeForkAndSpecialize_orig = nullptr;
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_l(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_l)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_o(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_o)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_p(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_p)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_q_alt(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_q_alt)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir, is_top_app
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_r(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_r)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_u(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs, jboolean mount_sysprop_overrides) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    args.mount_sysprop_overrides = &mount_sysprop_overrides;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_u)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs, mount_sysprop_overrides
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_samsung_m(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _0, jint _1, jstring nice_name, jintArray fds_to_close, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_m)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _0, _1, nice_name, fds_to_close, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_samsung_n(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _2, jint _3, jstring nice_name, jintArray fds_to_close, jstring instruction_set, jstring app_data_dir, jint _4) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_n)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _2, _3, nice_name, fds_to_close, instruction_set, app_data_dir, _4
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_samsung_o(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _5, jint _6, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_o)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _5, _6, nice_name, fds_to_close, fds_to_ignore, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_samsung_p(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _7, jint _8, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    ZygiskContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_p)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _7, _8, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkAndSpecialize_grapheneos_u(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs, jboolean mount_sysprop_overrides, jlongArray _13) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    HookContext ctx(env, &args);
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_grapheneos_u)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs, mount_sysprop_overrides, _13
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
std::array nativeForkAndSpecialize_methods = {
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_l
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_o
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_p
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Z)I",
        (void *) &nativeForkAndSpecialize_q_alt
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZ)I",
        (void *) &nativeForkAndSpecialize_r
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZZ)I",
        (void *) &nativeForkAndSpecialize_u
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_samsung_m
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[ILjava/lang/String;Ljava/lang/String;I)I",
        (void *) &nativeForkAndSpecialize_samsung_n
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[I[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_samsung_o
    },
    JNINativeMethod {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_samsung_p
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZZ[J)I",
        (void *) &nativeForkAndSpecialize_grapheneos_u
    },
};

void *nativeSpecializeAppProcess_orig = nullptr;
[[clang::no_stack_protector]] void nativeSpecializeAppProcess_q(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    ZygiskContext ctx(env, &args);
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_q)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeSpecializeAppProcess_post();
}
[[clang::no_stack_protector]] void nativeSpecializeAppProcess_q_alt(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    ZygiskContext ctx(env, &args);
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_q_alt)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir, is_top_app
    );
    ctx.nativeSpecializeAppProcess_post();
}
[[clang::no_stack_protector]] void nativeSpecializeAppProcess_r(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    ZygiskContext ctx(env, &args);
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_r)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs
    );
    ctx.nativeSpecializeAppProcess_post();
}
[[clang::no_stack_protector]] void nativeSpecializeAppProcess_u(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs, jboolean mount_sysprop_overrides) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    args.mount_sysprop_overrides = &mount_sysprop_overrides;
    ZygiskContext ctx(env, &args);
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_u)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs, mount_sysprop_overrides
    );
    ctx.nativeSpecializeAppProcess_post();
}
[[clang::no_stack_protector]] void nativeSpecializeAppProcess_samsung_q(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _9, jint _10, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    ZygiskContext ctx(env, &args);
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_samsung_q)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _9, _10, nice_name, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeSpecializeAppProcess_post();
}
[[clang::no_stack_protector]] void nativeSpecializeAppProcess_grapheneos_u(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs, jboolean mount_sysprop_overrides, jlongArray _14) {
    AppSpecializeArgs_v5 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    HookContext ctx(env, &args);
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_grapheneos_u)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs, mount_sysprop_overrides, _14
    );
    ctx.nativeSpecializeAppProcess_post();
}
std::array nativeSpecializeAppProcess_methods = {
    JNINativeMethod {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V",
        (void *) &nativeSpecializeAppProcess_q
    },
    JNINativeMethod {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Z)V",
        (void *) &nativeSpecializeAppProcess_q_alt
    },
    JNINativeMethod {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZ)V",
        (void *) &nativeSpecializeAppProcess_r
    },
    JNINativeMethod {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZZ)V",
        (void *) &nativeSpecializeAppProcess_u
    },
    JNINativeMethod {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V",
        (void *) &nativeSpecializeAppProcess_samsung_q
    },
};

void *nativeForkSystemServer_orig = nullptr;
[[clang::no_stack_protector]] jint nativeForkSystemServer_l(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jlong permitted_capabilities, jlong effective_capabilities) {
    ServerSpecializeArgs_v1 args(uid, gid, gids, runtime_flags, permitted_capabilities, effective_capabilities);
    ZygiskContext ctx(env, &args);
    ctx.nativeForkSystemServer_pre();
    reinterpret_cast<decltype(&nativeForkSystemServer_l)>(nativeForkSystemServer_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, permitted_capabilities, effective_capabilities
    );
    ctx.nativeForkSystemServer_post();
    return ctx.pid;
}
[[clang::no_stack_protector]] jint nativeForkSystemServer_samsung_q(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jint _11, jint _12, jobjectArray rlimits, jlong permitted_capabilities, jlong effective_capabilities) {
    ServerSpecializeArgs_v1 args(uid, gid, gids, runtime_flags, permitted_capabilities, effective_capabilities);
    ZygiskContext ctx(env, &args);
    ctx.nativeForkSystemServer_pre();
    reinterpret_cast<decltype(&nativeForkSystemServer_samsung_q)>(nativeForkSystemServer_orig)(
        env, clazz, uid, gid, gids, runtime_flags, _11, _12, rlimits, permitted_capabilities, effective_capabilities
    );
    ctx.nativeForkSystemServer_post();
    return ctx.pid;
}
std::array nativeForkSystemServer_methods = {
    JNINativeMethod {
        "nativeForkSystemServer",
        "(II[II[[IJJ)I",
        (void *) &nativeForkSystemServer_l
    },
    JNINativeMethod {
        "nativeForkSystemServer",
        "(II[IIII[[IJJ)I",
        (void *) &nativeForkSystemServer_samsung_q
    },
    {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZZ[J)V",
        (void *) &nativeSpecializeAppProcess_grapheneos_u
    },
};

} // namespace
