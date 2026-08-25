#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RTFIELDINFO_UNSAFEGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_RTFIELDINFO_UNSAFESETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_RTFIELDINFO_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_RTFIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924AA50)

namespace System::Reflection
{
	inline static constexpr unsigned int RtFieldInfo_TypeDefinitionIndex = 24913;

	class RtFieldInfo : public Il2CppObject
	{
	public:
		::System::Object* UnsafeGetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_UNSAFEGETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void UnsafeSetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_UNSAFESETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckConsistency(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_CHECKCONSISTENCY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

