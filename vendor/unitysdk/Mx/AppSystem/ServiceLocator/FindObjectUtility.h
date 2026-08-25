#pragma once
#include "../../../unitysdk.h"

#define MX_APPSYSTEM_SERVICELOCATOR_FINDOBJECTUTILITY_FINDOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_FINDOBJECTUTILITY_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_FINDOBJECTUTILITY_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0xA312D0)

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int FindObjectUtility_TypeDefinitionIndex = 37695;

	class FindObjectUtility : public Il2CppObject
	{
	public:
		Il2CppObject* FindObjectByType(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_FINDOBJECTUTILITY_FINDOBJECTBYTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsByType(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_FINDOBJECTUTILITY_FINDOBJECTSBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsByType(::System::Type* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_FINDOBJECTUTILITY_FINDOBJECTSBYTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

