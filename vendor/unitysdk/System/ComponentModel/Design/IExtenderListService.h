#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_IEXTENDERLISTSERVICE_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int IExtenderListService_TypeDefinitionIndex = 29544;

	class IExtenderListService : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetExtenderProviders()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_IEXTENDERLISTSERVICE_GETEXTENDERPROVIDERS_OFFSET))(nullptr);
		}

	};
}

