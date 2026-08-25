#pragma once
#include "unitysdk.h"

#define TILEMAPEVENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE160)

	inline static constexpr unsigned int TileMapEventDB_TypeDefinitionIndex = 19956;

	class TileMapEventDB : public Il2CppObject
	{
	public:
		::System::UInt64 TileMapHash; // 0x10
		::System::Int64 TileMapEventUniqueId; // 0x18

		::System::Void .ctor(::System::UInt64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TILEMAPEVENTDB_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

