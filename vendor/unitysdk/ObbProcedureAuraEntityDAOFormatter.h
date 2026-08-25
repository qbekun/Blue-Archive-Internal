#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObbProcedureAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define OBBPROCEDUREAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17898A0)
#define OBBPROCEDUREAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1789900)
#define OBBPROCEDUREAURAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1789960)

	inline static constexpr unsigned int ObbProcedureAuraEntityDAOFormatter_TypeDefinitionIndex = 15542;

	class ObbProcedureAuraEntityDAOFormatter : public ::System::IO::StreamWriter
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBBPROCEDUREAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBBPROCEDUREAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBPROCEDUREAURAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

