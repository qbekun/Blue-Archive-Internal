#pragma once
#include "../unitysdk.h"

class InputLayer;

#define MXUNDERCOVER_UCINPUTBLOCKER_PROCESS_OFFSET UNITYSDK_OFFSET(0xDB1770)
#define MXUNDERCOVER_UCINPUTBLOCKER_BLOCK_OFFSET UNITYSDK_OFFSET(0xDB1810)
#define MXUNDERCOVER_UCINPUTBLOCKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB18B0)
#define MXUNDERCOVER_UCINPUTBLOCKER_RESET_OFFSET UNITYSDK_OFFSET(0xDB18D0)
#define MXUNDERCOVER_UCINPUTBLOCKER_UNBLOCK_OFFSET UNITYSDK_OFFSET(0xDB1980)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCInputBlocker_TypeDefinitionIndex = 9943;

	class UCInputBlocker : public Il2CppObject
	{
	public:
		InputLayer* layer; // 0x10
		::System::Int32 count; // 0x14

		::System::Void Process()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINPUTBLOCKER_PROCESS_OFFSET))(nullptr);
		}

		::System::Void Block()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINPUTBLOCKER_BLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(InputLayer* arg)
		{
			((::System::Void(*)(InputLayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINPUTBLOCKER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINPUTBLOCKER_RESET_OFFSET))(nullptr);
		}

		::System::Void Unblock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINPUTBLOCKER_UNBLOCK_OFFSET))(nullptr);
		}

	};
}

