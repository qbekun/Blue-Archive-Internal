#pragma once
#include "unitysdk.h"

#define LOGICGROUNDINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146B000)
#define LOGICGROUNDINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x146ACF0)
#define LOGICGROUNDINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146B050)

	inline static constexpr unsigned int LogicGroundInfoFormatter_TypeDefinitionIndex = 15112;

	class LogicGroundInfoFormatter : public UnitySafeFindHandle
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::LogicGroundInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::LogicGroundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICGROUNDINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICGROUNDINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::LogicGroundInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::LogicGroundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICGROUNDINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

