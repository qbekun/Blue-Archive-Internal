#pragma once
#include "../unitysdk.h"

namespace AutoMapper::Internal { class MemberPath; }

#define AUTOMAPPER_PATHMAP_GET_MEMBERPATH_OFFSET UNITYSDK_OFFSET(0x4D1320)

namespace AutoMapper
{
	inline static constexpr unsigned int PathMap_TypeDefinitionIndex = 37630;

	class PathMap : public Il2CppObject
	{
	public:
		::AutoMapper::Internal::MemberPath* _MemberPath_k__BackingField; // 0x20

		::AutoMapper::Internal::MemberPath* get_MemberPath()
		{
			return (return (::AutoMapper::Internal::MemberPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_PATHMAP_GET_MEMBERPATH_OFFSET))(nullptr);
		}

	};
}

