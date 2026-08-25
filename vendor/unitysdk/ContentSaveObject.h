#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace MX::GameLogic::DBModel { class EventContentChangeDB; }

#define CONTENTSAVEOBJECT_SYNCCONTENTSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1EFD870)
#define CONTENTSAVEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD8B0)

	inline static constexpr unsigned int ContentSaveObject_TypeDefinitionIndex = 1936;

	class ContentSaveObject : public Il2CppObject
	{
	public:
		::System::Boolean HasValidContentSaveData; // 0x10
		::MX::GameLogic::DBModel::ContentSaveDB* ContentSaveData; // 0x18
		::MX::GameLogic::DBModel::EventContentChangeDB* EventContentChangeDB; // 0x20

		::System::Void SyncContentSaveData(::MX::GameLogic::DBModel::ContentSaveDB* arg, ::System::Boolean arg2, ::MX::GameLogic::DBModel::EventContentChangeDB* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ContentSaveDB*, ::System::Boolean, ::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEOBJECT_SYNCCONTENTSAVEDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

