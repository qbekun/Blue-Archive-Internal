#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BASEJSONREPOSITORY`3_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASEJSONREPOSITORY`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BaseJsonRepository`3_TypeDefinitionIndex = 16540;

	class BaseJsonRepository`3 : public <co_LoadDefaultSection>d__121
	{
	public:
		Il2CppObject* instance; // 0x0

		Il2CppObject* get_Instance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEJSONREPOSITORY`3_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEJSONREPOSITORY`3_.CTOR_OFFSET))(nullptr);
		}

	};
}

