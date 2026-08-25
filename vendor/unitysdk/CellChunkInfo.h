#pragma once
#include "unitysdk.h"

#define CELLCHUNKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F84330)

	inline static constexpr unsigned int CellChunkInfo_TypeDefinitionIndex = 33796;

	class CellChunkInfo : public Il2CppObject
	{
	public:
		Il2CppObject* chunks; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELLCHUNKINFO_.CTOR_OFFSET))(nullptr);
		}

	};

