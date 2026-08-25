#pragma once
#include "unitysdk.h"

#define WITHDEFAULT_GET_DEFAULTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT_SET_DEFAULTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT_INITIALIZEAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT_TRYSETDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT_TRYRESETDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define WITHDEFAULT__.CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int WithDefault_TypeDefinitionIndex = 37788;

	class WithDefault : public ::System::Xml::Schema::XmlSchemaMinLengthFacet
	{
	public:
		Il2CppObject* _DefaultKey; // 0x0
		::System::Action* ForceSetDefaultState; // 0x0

		Il2CppObject* get_DefaultKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_GET_DEFAULTKEY_OFFSET))(nullptr);
		}

		::System::Void set_DefaultKey(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_SET_DEFAULTKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_INITIALIZEAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* TrySetDefaultState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_TRYSETDEFAULTSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* TryResetDefaultState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT_TRYRESETDEFAULTSTATE_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WITHDEFAULT__.CTOR_B__5_0_OFFSET))(nullptr);
		}

	};

