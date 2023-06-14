add_test([=[DeveloperTest.ConstructorAndGetters]=]  /workspaces/project_info/build/developer_tests [==[--gtest_filter=DeveloperTest.ConstructorAndGetters]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[DeveloperTest.ConstructorAndGetters]=]  PROPERTIES WORKING_DIRECTORY /workspaces/project_info/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  developer_tests_TESTS DeveloperTest.ConstructorAndGetters)
