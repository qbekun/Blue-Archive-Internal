#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class NPAccountWindow; }
namespace NPA { class NXPToyInitialInfoResult; }
namespace NPA { class NXPToyResult; }

#define <>C__DISPLAYCLASS129_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D71870)
#define <>C__DISPLAYCLASS129_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x9D7B9F0)
#define <>C__DISPLAYCLASS129_0__INITIALIZE_B__1_OFFSET UNITYSDK_OFFSET(0x9D7BA80)
#define <>C__DISPLAYCLASS129_0__INITIALIZE_B__2_OFFSET UNITYSDK_OFFSET(0x9D7BBE0)

	inline static constexpr unsigned int <>c__DisplayClass129_0_TypeDefinitionIndex = 26232;

	class <>c__DisplayClass129_0 : public Il2CppObject
	{
	public:
		Il2CppObject* action; // 0x10
		::NPA::Editor::NPAccountWindow* __4__this; // 0x18
		Il2CppObject* mainThreadAction; // 0x20
		Il2CppObject* __9__2; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__0(::NPA::NXPToyInitialInfoResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyInitialInfoResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_0__INITIALIZE_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__1(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_0__INITIALIZE_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__2(::System::Boolean arg, ::NPA::NXPToyInitialInfoResult* arg)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::NXPToyInitialInfoResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_0__INITIALIZE_B__2_OFFSET))(arg, arg, nullptr);
		}

	};

