#pragma once
#include "../../unitysdk.h"

#define MX_DATA_CHARACTERDIALOGEMOJIDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18A3340)
#define MX_DATA_CHARACTERDIALOGEMOJIDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18A3380)
#define MX_DATA_CHARACTERDIALOGEMOJIDATA_TRYGETALLEVENTCVLIST_OFFSET UNITYSDK_OFFSET(0x18A3390)
#define MX_DATA_CHARACTERDIALOGEMOJIDATA_GETBYGOUNDID_OFFSET UNITYSDK_OFFSET(0x18A37F0)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogEmojiData_TypeDefinitionIndex = 16020;

	class CharacterDialogEmojiData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllEventCVList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIDATA_TRYGETALLEVENTCVLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetByGoundId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIDATA_GETBYGOUNDID_OFFSET))(arg, nullptr);
		}

	};
}

