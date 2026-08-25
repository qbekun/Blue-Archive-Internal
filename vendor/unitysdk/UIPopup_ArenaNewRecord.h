#pragma once
#include "unitysdk.h"

class UIGrid;
class UITexture;
class UILabel;
class MXButton;
class ArenaRecordType;

#define UIPOPUP_ARENANEWRECORD_SET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0x22017D0)
#define UIPOPUP_ARENANEWRECORD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22017E0)
#define UIPOPUP_ARENANEWRECORD_GET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0x2201E90)
#define UIPOPUP_ARENANEWRECORD_SETPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x2201B90)
#define UIPOPUP_ARENANEWRECORD_AWAKE_OFFSET UNITYSDK_OFFSET(0x2201EA0)
#define UIPOPUP_ARENANEWRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2201FD0)

	inline static constexpr unsigned int UIPopup_ArenaNewRecord_TypeDefinitionIndex = 4297;

	class UIPopup_ArenaNewRecord : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0xD8
		UITexture* rankImage; // 0xE0
		UILabel* currentRankLabel; // 0xE8
		UILabel* prevRankLabel; // 0xF0
		UILabel* titleLabel; // 0xF8
		MXButton* confirmButton; // 0x100
		::Il2CppArray<::System::Object*>* parcelCards; // 0x108
		ArenaRecordType* _RecordType_k__BackingField; // 0x110

		::System::Void set_RecordType(ArenaRecordType* arg)
		{
			((::System::Void(*)(ArenaRecordType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENANEWRECORD_SET_RECORDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENANEWRECORD_ONOPENED_OFFSET))(arg, nullptr);
		}

		ArenaRecordType* get_RecordType()
		{
			return ((ArenaRecordType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENANEWRECORD_GET_RECORDTYPE_OFFSET))(nullptr);
		}

		::System::Void SetParcelCards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENANEWRECORD_SETPARCELCARDS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENANEWRECORD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENANEWRECORD_.CTOR_OFFSET))(nullptr);
		}

	};

