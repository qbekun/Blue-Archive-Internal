#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_IREFERENCESERVICE_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_IREFERENCESERVICE_GETNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_IREFERENCESERVICE_GETREFERENCES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int IReferenceService_TypeDefinitionIndex = 29545;

	class IReferenceService : public Il2CppObject
	{
	public:
		::System::Object* GetReference(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_IREFERENCESERVICE_GETREFERENCE_OFFSET))(str, nullptr);
		}

		::System::String* GetName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_IREFERENCESERVICE_GETNAME_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetReferences(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_IREFERENCESERVICE_GETREFERENCES_OFFSET))(arg, nullptr);
		}

	};
}

