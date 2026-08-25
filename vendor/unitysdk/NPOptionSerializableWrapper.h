#pragma once
#include "unitysdk.h"

namespace NPA { class NPOptions; }

#define NPOPTIONSERIALIZABLEWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD530)
#define NPOPTIONSERIALIZABLEWRAPPER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBD760)
#define NPOPTIONSERIALIZABLEWRAPPER_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9BBD590)

	inline static constexpr unsigned int NPOptionSerializableWrapper_TypeDefinitionIndex = 25536;

	class NPOptionSerializableWrapper : public Il2CppObject
	{
	public:
		Il2CppObject* defaultLoginTypeList; // 0x10
		GoogleSignInInsteadOfGcidLoginOption* googleSignInInsteadOfGcidLogin; // 0x18
		NexonGameSecurityOption* useNgsm; // 0x1C
		NexonGameSecurityOption* useNgsx; // 0x20
		NexonCIOption* useNexonCI; // 0x24

		::System::Void .ctor(::NPA::NPOptions* arg)
		{
			((::System::Void(*)(::NPA::NPOptions*, ::PVOID))((::PBYTE)hIl2Cpp + NPOPTIONSERIALIZABLEWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOPTIONSERIALIZABLEWRAPPER_TOSTRING_OFFSET))(nullptr);
		}

		::NPA::NPOptions* FromJson(::System::String* str)
		{
			return (return (::NPA::NPOptions*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPOPTIONSERIALIZABLEWRAPPER_FROMJSON_OFFSET))(str, nullptr);
		}

	};

