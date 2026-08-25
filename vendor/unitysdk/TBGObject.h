#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }

#define TBGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x208B9D0)
#define TBGOBJECT_SYNCSAVEDB_OFFSET UNITYSDK_OFFSET(0x208BA40)

	inline static constexpr unsigned int TBGObject_TypeDefinitionIndex = 3466;

	class TBGObject : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* SaveDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncSaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + TBGOBJECT_SYNCSAVEDB_OFFSET))(arg, nullptr);
		}

	};

