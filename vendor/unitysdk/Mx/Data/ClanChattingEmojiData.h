#pragma once
#include "../../unitysdk.h"

#define MX_DATA_CLANCHATTINGEMOJIDATA_GETEMOJITABLELIST_OFFSET UNITYSDK_OFFSET(0x18A3BD0)
#define MX_DATA_CLANCHATTINGEMOJIDATA_GETEMOJIPATH_OFFSET UNITYSDK_OFFSET(0x18A3C50)
#define MX_DATA_CLANCHATTINGEMOJIDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18A3DB0)
#define MX_DATA_CLANCHATTINGEMOJIDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18A3DC0)

namespace MX::Data
{
	inline static constexpr unsigned int ClanChattingEmojiData_TypeDefinitionIndex = 16021;

	class ClanChattingEmojiData : public Il2CppObject
	{
	public:
		Il2CppObject* GetEmojiTableList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANCHATTINGEMOJIDATA_GETEMOJITABLELIST_OFFSET))(nullptr);
		}

		::System::String* GetEmojiPath(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANCHATTINGEMOJIDATA_GETEMOJIPATH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANCHATTINGEMOJIDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANCHATTINGEMOJIDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

	};
}

