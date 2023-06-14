add_test([=[DeveloperTest.ConstructorAndGetters]=]  /workspaces/project_info/project_info_II/build/developer_tests [==[--gtest_filter=DeveloperTest.ConstructorAndGetters]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[DeveloperTest.ConstructorAndGetters]=]  PROPERTIES WORKING_DIRECTORY /workspaces/project_info/project_info_II/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  developer_tests_TESTS DeveloperTest.ConstructorAndGetters)
