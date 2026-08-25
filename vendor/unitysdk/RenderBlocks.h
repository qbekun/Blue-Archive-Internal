#pragma once
#include "unitysdk.h"

#define RENDERBLOCKS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA053E90)
#define RENDERBLOCKS_GETRANGE_OFFSET UNITYSDK_OFFSET(0xA054E40)
#define RENDERBLOCKS_FILLBLOCKRANGES_OFFSET UNITYSDK_OFFSET(0xA0594A0)
#define RENDERBLOCKS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0595C0)
#define RENDERBLOCKS_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xA054080)

	inline static constexpr unsigned int RenderBlocks_TypeDefinitionIndex = 32638;

	class RenderBlocks : public Il2CppObject
	{
	public:
		Il2CppObject* m_BlockEventLimits; // 0x10
		Il2CppObject* m_BlockRanges; // 0x20
		Il2CppObject* m_BlockRangeLengths; // 0x30

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERBLOCKS_.CTOR_OFFSET))(arg, nullptr);
		}

		BlockRange* GetRange(::System::Int32 arg)
		{
			return (return (BlockRange*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERBLOCKS_GETRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void FillBlockRanges(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERBLOCKS_FILLBLOCKRANGES_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERBLOCKS_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 GetLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERBLOCKS_GETLENGTH_OFFSET))(arg, nullptr);
		}

	};

