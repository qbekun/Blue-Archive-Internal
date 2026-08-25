#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyPushPolicyCategory; }
namespace NPA::Auth::PushPolicy { class NXPPushPolicyCategory; }

#define NPA_NXPPUSHPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBB810)
#define NPA_NXPPUSHPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBAD60)
#define NPA_NXPPUSHPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBB960)
#define NPA_NXPPUSHPOLICY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9BBBB20)
#define NPA_NXPPUSHPOLICY_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x9BBBB30)
#define NPA_NXPPUSHPOLICY_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x9BBBB40)
#define NPA_NXPPUSHPOLICY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9BBBB50)
#define NPA_NXPPUSHPOLICY_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9BBBB60)
#define NPA_NXPPUSHPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBBB70)

namespace NPA
{
	inline static constexpr unsigned int NXPPushPolicy_TypeDefinitionIndex = 25493;

	class NXPPushPolicy : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean enable; // 0x18
		::System::String* name; // 0x20
		::NPA::NXPToyPushPolicyCategory* category; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::String* str, ::NPA::Auth::PushPolicy::NXPPushPolicyCategory* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*, ::NPA::Auth::PushPolicy::NXPPushPolicyCategory*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_.CTOR_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean get_Enable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_GET_ENABLE_OFFSET))(nullptr);
		}

		::System::Void set_Enable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_SET_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_GET_NAME_OFFSET))(nullptr);
		}

		::NPA::NXPToyPushPolicyCategory* get_Category()
		{
			return (return (::NPA::NXPToyPushPolicyCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

