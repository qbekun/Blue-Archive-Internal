#pragma once
#include "unitysdk.h"

#define DEFAULTGRAPHICSSETTINGS_SET_FPS_OFFSET UNITYSDK_OFFSET(0x1D29C40)
#define DEFAULTGRAPHICSSETTINGS_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D29C50)
#define DEFAULTGRAPHICSSETTINGS_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D29C60)
#define DEFAULTGRAPHICSSETTINGS_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D29C70)
#define DEFAULTGRAPHICSSETTINGS_GET_MODELS_OFFSET UNITYSDK_OFFSET(0x1D29C80)
#define DEFAULTGRAPHICSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29C10)
#define DEFAULTGRAPHICSSETTINGS_GET_FPS_OFFSET UNITYSDK_OFFSET(0x1D29C90)
#define DEFAULTGRAPHICSSETTINGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D29CA0)
#define DEFAULTGRAPHICSSETTINGS_SET_MODELS_OFFSET UNITYSDK_OFFSET(0x1D29CB0)

	inline static constexpr unsigned int DefaultGraphicsSettings_TypeDefinitionIndex = 20045;

	class DefaultGraphicsSettings : public Il2CppObject
	{
	public:
		::System::String* _Category_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Models_k__BackingField; // 0x18
		::System::Int32 _FPS_k__BackingField; // 0x20
		::System::Int32 _Resolution_k__BackingField; // 0x24

		::System::Void set_FPS(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_SET_FPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Category(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_SET_CATEGORY_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Resolution()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_GET_RESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_Resolution(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_SET_RESOLUTION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Models()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_GET_MODELS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_FPS()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_GET_FPS_OFFSET))(nullptr);
		}

		::System::String* get_Category()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_Models(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTGRAPHICSSETTINGS_SET_MODELS_OFFSET))(arg, nullptr);
		}

	};

