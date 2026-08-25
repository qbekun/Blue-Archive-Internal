#pragma once
#include "unitysdk.h"

namespace NPA::Security { class NXPToyNgsInfo; }

#define EXTENDEDRESULTSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDD60)

	inline static constexpr unsigned int ExtendedResultSet_TypeDefinitionIndex = 27573;

	class ExtendedResultSet : public Il2CppObject
	{
	public:
		::NPA::Security::NXPToyNgsInfo* ngsInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXTENDEDRESULTSET_.CTOR_OFFSET))(nullptr);
		}

	};

