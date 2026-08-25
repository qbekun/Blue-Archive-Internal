#pragma once
#include "unitysdk.h"

#define INPUTPROTECTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_STARTFORCETOUCHON_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_GET_CANINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_SET_CANINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_GETINPUTLAYERSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_ENDFORCETOUCHON_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_ONCHANGEDCANINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTPROTECTER`1_FORCETOUCHON_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int InputProtecter`1_TypeDefinitionIndex = 2988;

	class InputProtecter`1 : public Il2CppObject
	{
	public:
		Il2CppObject* OnCanInput; // 0x0
		Il2CppObject* canInputLayerDic; // 0x0
		::System::Boolean _CanInput_k__BackingField; // 0x0
		::System::Boolean _startedForceTouchOn; // 0x0
		Il2CppObject* _forceTouchOnCanInputLayerDic; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Item(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartForceTouchOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_STARTFORCETOUCHON_OFFSET))(nullptr);
		}

		::System::Boolean get_CanInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_GET_CANINPUT_OFFSET))(nullptr);
		}

		::System::Void set_CanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_SET_CANINPUT_OFFSET))(arg, nullptr);
		}

		::System::String* GetInputLayerString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_GETINPUTLAYERSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void EndForceTouchOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_ENDFORCETOUCHON_OFFSET))(nullptr);
		}

		::System::Void OnChangedCanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_ONCHANGEDCANINPUT_OFFSET))(arg, nullptr);
		}

		::System::String* GetColor(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_GETCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void ForceTouchOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTPROTECTER`1_FORCETOUCHON_OFFSET))(nullptr);
		}

	};

