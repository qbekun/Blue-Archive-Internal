#pragma once
#include "unitysdk.h"

class InputDelegate;
namespace FlatData { class JudgeGrade; }
class NoteLine;

#define MINIGAMEINPUTHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD15070)
#define MINIGAMEINPUTHANDLER_ADD_INPUTEVENT_OFFSET UNITYSDK_OFFSET(0xD153E0)
#define MINIGAMEINPUTHANDLER_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD15490)
#define MINIGAMEINPUTHANDLER_DETECTRHYTHMINPUT_OFFSET UNITYSDK_OFFSET(0xD15720)
#define MINIGAMEINPUTHANDLER_ISEMPTYINPUT_OFFSET UNITYSDK_OFFSET(0xD15B10)
#define MINIGAMEINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD15C00)
#define MINIGAMEINPUTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD15C10)
#define MINIGAMEINPUTHANDLER_ISMULTIINPUT_OFFSET UNITYSDK_OFFSET(0xD15AF0)
#define MINIGAMEINPUTHANDLER_RESETLASTINPUT_OFFSET UNITYSDK_OFFSET(0xD15C20)
#define MINIGAMEINPUTHANDLER_REMOVE_INPUTEVENT_OFFSET UNITYSDK_OFFSET(0xD15670)

	inline static constexpr unsigned int MinigameInputHandler_TypeDefinitionIndex = 662;

	class MinigameInputHandler : public Il2CppObject
	{
	public:
		InputDelegate* InputEvent; // 0x0
		::Il2CppArray<::System::Object*>* lastInputTime; // 0x10
		::Il2CppArray<::System::Object*>* lastFlickTime; // 0x18
		::System::Int32 width; // 0x20
		::System::Int32 height; // 0x24
		::Il2CppArray<::System::Object*>* inputBits; // 0x28
		::Il2CppArray<::System::Object*>* emptyBits; // 0x30

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void add_InputEvent(InputDelegate* arg)
		{
			((::System::Void(*)(InputDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_ADD_INPUTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void UnsubscribeEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_UNSUBSCRIBEEVENT_OFFSET))(nullptr);
		}

		::System::Void DetectRhythmInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_DETECTRHYTHMINPUT_OFFSET))(nullptr);
		}

		::System::Boolean isEmptyInput(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_ISEMPTYINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean isMultiInput(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_ISMULTIINPUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetLastInput(::FlatData::JudgeGrade* arg, NoteLine* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::JudgeGrade*, NoteLine*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_RESETLASTINPUT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void remove_InputEvent(InputDelegate* arg)
		{
			((::System::Void(*)(InputDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEINPUTHANDLER_REMOVE_INPUTEVENT_OFFSET))(arg, nullptr);
		}

	};

