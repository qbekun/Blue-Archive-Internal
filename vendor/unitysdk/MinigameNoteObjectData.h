#pragma once
#include "unitysdk.h"

class MinigameNoteObject;
class MinigameNoteObjectData;
namespace UnityEngine { class Vector3; }
class NoteLine;
class NoteProperty;
namespace UnityEngine { class Color; }

#define MINIGAMENOTEOBJECTDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD15CE0)
#define MINIGAMENOTEOBJECTDATA_MARKASHANDLEDNOTE_OFFSET UNITYSDK_OFFSET(0xD15D30)
#define MINIGAMENOTEOBJECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xD15D40)
#define MINIGAMENOTEOBJECTDATA_SET2DUINOTEINFO_OFFSET UNITYSDK_OFFSET(0xD15D50)
#define MINIGAMENOTEOBJECTDATA_ISHANDLED_OFFSET UNITYSDK_OFFSET(0xD15DA0)

	inline static constexpr unsigned int MinigameNoteObjectData_TypeDefinitionIndex = 663;

	class MinigameNoteObjectData : public Il2CppObject
	{
	public:
		MinigameNoteObject* Instance; // 0x10
		MinigameNoteObjectData* LongNotePair; // 0x18
		::System::Double Speed; // 0x20
		::UnityEngine::Vector3* Position; // 0x28
		NoteLine* LinePosition; // 0x34
		NoteProperty* NoteProperty; // 0x38
		::System::Boolean IsLong; // 0x3C
		::System::Boolean IsTick; // 0x3D
		::System::Boolean IsPressed; // 0x3E
		::System::Boolean IsFlicked; // 0x3F
		::System::Boolean IsLongnoteEndMark; // 0x40
		::System::Single realTimePosition; // 0x44
		::System::Single remainTime; // 0x48
		::System::Single IndividualSpeed; // 0x4C
		::System::Boolean IsNoteActive; // 0x50
		::System::Int32 NoteIndex; // 0x54
		::System::String* NoteSpriteName; // 0x58
		::System::Boolean IsFlip; // 0x60
		::UnityEngine::Color* LongNoteColor; // 0x64
		::System::Single NoteScale; // 0x74
		::System::Boolean isHandled; // 0x78

		::System::Void Initialize(::System::Int32 arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, NoteLine* arg4, NoteProperty* arg5, ::System::Boolean arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::System::Single, NoteLine*, NoteProperty*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECTDATA_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void MarkAsHandledNote()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECTDATA_MARKASHANDLEDNOTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set2DUINoteInfo(::System::String* str, ::UnityEngine::Color* arg, ::System::Single arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECTDATA_SET2DUINOTEINFO_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsHandled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEOBJECTDATA_ISHANDLED_OFFSET))(nullptr);
		}

	};

