#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class Category; }

#define NEXON_PUB_RESOURCEDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x954C7A0)
#define NEXON_PUB_RESOURCEDATA_GET_RESOURCES_OFFSET UNITYSDK_OFFSET(0x954C7B0)
#define NEXON_PUB_RESOURCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C7C0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int ResourceData_TypeDefinitionIndex = 37551;

	class ResourceData : public Il2CppObject
	{
	public:
		::Nexon::Pub::Category* category; // 0x10
		::Il2CppArray<::System::Object*>* resources; // 0x18

		::Nexon::Pub::Category* get_Category()
		{
			return (return (::Nexon::Pub::Category*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCEDATA_GET_CATEGORY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Resources()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCEDATA_GET_RESOURCES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

