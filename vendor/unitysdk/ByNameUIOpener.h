#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define BYNAMEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BA290)
#define BYNAMEUIOPENER__OPENUI_G__OPENTIMEATTACKLOBBY|6_3_OFFSET UNITYSDK_OFFSET(0x26BA2A0)
#define BYNAMEUIOPENER_GET_UINAME_OFFSET UNITYSDK_OFFSET(0x26BA490)
#define BYNAMEUIOPENER_SET_UINAME_OFFSET UNITYSDK_OFFSET(0x26BA4A0)
#define BYNAMEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BA250)
#define BYNAMEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BA4B0)
#define BYNAMEUIOPENER__OPENUI_G__OPENLOBBY|6_5_OFFSET UNITYSDK_OFFSET(0x26BB7C0)
#define BYNAMEUIOPENER__OPENUI_G__OPENCAFEUI|6_1_OFFSET UNITYSDK_OFFSET(0x26BB670)
#define BYNAMEUIOPENER__OPENUI_G__HANDLERESPONSE|6_11_OFFSET UNITYSDK_OFFSET(0x26BB850)

	inline static constexpr unsigned int ByNameUIOpener_TypeDefinitionIndex = 6920;

	class ByNameUIOpener : public Il2CppObject
	{
	public:
		::System::String* _UIName_k__BackingField; // 0x18

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_g__OpenTimeAttackLobby|6_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER__OPENUI_G__OPENTIMEATTACKLOBBY|6_3_OFFSET))(nullptr);
		}

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER_GET_UINAME_OFFSET))(nullptr);
		}

		::System::Void set_UIName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER_SET_UINAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_g__OpenLobby|6_5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER__OPENUI_G__OPENLOBBY|6_5_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_g__OpenCafeUI|6_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER__OPENUI_G__OPENCAFEUI|6_1_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_g__HandleResponse|6_11(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + BYNAMEUIOPENER__OPENUI_G__HANDLERESPONSE|6_11_OFFSET))(arg, nullptr);
		}

	};

