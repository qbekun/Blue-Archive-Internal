#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDHIDEHPBAR_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x21709F0)
#define GROUNDCOMMANDHIDEHPBAR_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21712E0)
#define GROUNDCOMMANDHIDEHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2171EF0)
#define GROUNDCOMMANDHIDEHPBAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2171F40)
#define GROUNDCOMMANDHIDEHPBAR_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2171F50)

	inline static constexpr unsigned int GroundCommandHideHPBar_TypeDefinitionIndex = 4028;

	class GroundCommandHideHPBar : public Il2CppObject
	{
	public:
		::System::Boolean IsShow; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandHideHPBar&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandHideHPBar&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBAR_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandHideHPBar&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandHideHPBar&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBAR_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBAR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBAR_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};

