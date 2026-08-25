#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveBaseDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ROOTMOTIONMOVEBASEDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x176EE90)
#define ROOTMOTIONMOVEBASEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x176EFC0)
#define ROOTMOTIONMOVEBASEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x176F3B0)
#define ROOTMOTIONMOVEBASEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x176EDF0)

	inline static constexpr unsigned int RootMotionMoveBaseDAOFormatter_TypeDefinitionIndex = 15528;

	class RootMotionMoveBaseDAOFormatter : public <CopyToAsyncCore>d__71
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEBASEDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveBaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RootMotionMoveBaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEBASEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveBaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RootMotionMoveBaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEBASEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEBASEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

