#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::IL2CPP { class Option; }

#define BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_GET_OPTION_OFFSET UNITYSDK_OFFSET(0x899E40)
#define BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x899E50)
#define BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x899E60)
#define BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x899EA0)
#define BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x899EB0)

namespace BestHTTP::PlatformSupport::IL2CPP
{
	inline static constexpr unsigned int Il2CppSetOptionAttribute_TypeDefinitionIndex = 23284;

	class Il2CppSetOptionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::BestHTTP::PlatformSupport::IL2CPP::Option* _Option_k__BackingField; // 0x10
		::System::Object* _Value_k__BackingField; // 0x18

		::BestHTTP::PlatformSupport::IL2CPP::Option* get_Option()
		{
			return (return (::BestHTTP::PlatformSupport::IL2CPP::Option*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_GET_OPTION_OFFSET))(nullptr);
		}

		::System::Void set_Option(::BestHTTP::PlatformSupport::IL2CPP::Option* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::IL2CPP::Option*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_SET_OPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::PlatformSupport::IL2CPP::Option* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::IL2CPP::Option*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_IL2CPP_IL2CPPSETOPTIONATTRIBUTE_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

