#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterDialogEmojiExcel; }

#define MX_DATA_CHARACTERDIALOGEMOJIEXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x18379A0)
#define MX_DATA_CHARACTERDIALOGEMOJIEXCELEXTENSION_GETVOICEIDS_OFFSET UNITYSDK_OFFSET(0x1837A90)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogEmojiExcelExtension_TypeDefinitionIndex = 15744;

	class CharacterDialogEmojiExcelExtension : public Il2CppObject
	{
	public:
		::System::String* GetLocalizedText(::MX::Data::Excel::CharacterDialogEmojiExcel* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::CharacterDialogEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIEXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVoiceIds(::MX::Data::Excel::CharacterDialogEmojiExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::CharacterDialogEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGEMOJIEXCELEXTENSION_GETVOICEIDS_OFFSET))(arg, nullptr);
		}

	};
}

