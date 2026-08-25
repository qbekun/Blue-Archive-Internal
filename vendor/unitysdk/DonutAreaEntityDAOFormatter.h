#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DonutAreaEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define DONUTAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1723FB0)
#define DONUTAREAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17207C0)
#define DONUTAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1724000)

	inline static constexpr unsigned int DonutAreaEntityDAOFormatter_TypeDefinitionIndex = 15492;

	class DonutAreaEntityDAOFormatter : public ::System::Diagnostics::StackFrame
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DonutAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DonutAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DONUTAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONUTAREAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DonutAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DonutAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DONUTAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

