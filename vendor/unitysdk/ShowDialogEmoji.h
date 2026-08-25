#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define SHOWDIALOGEMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0xD97130)
#define SHOWDIALOGEMOJI_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD97140)
#define SHOWDIALOGEMOJI_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD973D0)

	inline static constexpr unsigned int ShowDialogEmoji_TypeDefinitionIndex = 9765;

	class ShowDialogEmoji : public Il2CppObject
	{
	public:
		::System::Int64 characterDialogEmojiGroupId; // 0x28
		::Il2CppArray<::System::Object*>* targets; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWDIALOGEMOJI_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWDIALOGEMOJI_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + SHOWDIALOGEMOJI_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

