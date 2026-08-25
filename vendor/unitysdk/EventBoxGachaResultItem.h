#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class EventBoxGachaItemDisplay;
namespace MX::GameLogic::DBModel { class EventContentBoxGachaElement; }

#define EVENTBOXGACHARESULTITEM_PLAYRESULTEND_OFFSET UNITYSDK_OFFSET(0x247BB60)
#define EVENTBOXGACHARESULTITEM_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x247BBE0)
#define EVENTBOXGACHARESULTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x247BC40)
#define EVENTBOXGACHARESULTITEM_PLAYRESULT_OFFSET UNITYSDK_OFFSET(0x247BCE0)
#define EVENTBOXGACHARESULTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x247BDC0)
#define EVENTBOXGACHARESULTITEM_PLAYOPEN_OFFSET UNITYSDK_OFFSET(0x247BE70)

	inline static constexpr unsigned int EventBoxGachaResultItem_TypeDefinitionIndex = 5668;

	class EventBoxGachaResultItem : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* ani; // 0x18
		EventBoxGachaItemDisplay* prize; // 0x20
		EventBoxGachaItemDisplay* nonPrize; // 0x28
		::Il2CppArray<::System::Object*>* hideOnInitList; // 0x30
		::System::Boolean isPrize; // 0x38
		::System::String* openNormalAniName; // 0x40
		::System::String* openPrizeAniName; // 0x48
		::System::String* resultNormalAniName; // 0x50
		::System::String* resultPrizeAniName; // 0x58

		::System::Void PlayResultEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHARESULTITEM_PLAYRESULTEND_OFFSET))(nullptr);
		}

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHARESULTITEM_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::EventContentBoxGachaElement* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentBoxGachaElement*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHARESULTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void PlayResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHARESULTITEM_PLAYRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHARESULTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHARESULTITEM_PLAYOPEN_OFFSET))(nullptr);
		}

	};

