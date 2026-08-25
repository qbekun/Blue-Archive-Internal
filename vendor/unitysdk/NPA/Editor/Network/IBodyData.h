#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_IBODYDATA_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int IBodyData_TypeDefinitionIndex = 26624;

	class IBodyData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Get()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYDATA_GET_OFFSET))(nullptr);
		}

	};
}

