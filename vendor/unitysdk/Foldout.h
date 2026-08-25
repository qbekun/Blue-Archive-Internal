#pragma once
#include "unitysdk.h"

#define FOLDOUT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9FB1B80)
#define FOLDOUT_GET_COLUMNLABELS_OFFSET UNITYSDK_OFFSET(0x9FB1B90)
#define FOLDOUT_SET_COLUMNLABELS_OFFSET UNITYSDK_OFFSET(0x9FB1BA0)
#define FOLDOUT_GET_COLUMNTOOLTIPS_OFFSET UNITYSDK_OFFSET(0x9FB1BB0)
#define FOLDOUT_SET_COLUMNTOOLTIPS_OFFSET UNITYSDK_OFFSET(0x9FB1BC0)
#define FOLDOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1BD0)
#define FOLDOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1BE0)
#define FOLDOUT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9FB1C30)
#define FOLDOUT_UNITYENGINE.RENDERING.DEBUGUI.IVALUEFIELD.GETVALUE_OFFSET UNITYSDK_OFFSET(0x9FB1C40)
#define FOLDOUT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FB1C90)
#define FOLDOUT_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FB1D00)
#define FOLDOUT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FB1D10)

	inline static constexpr unsigned int Foldout_TypeDefinitionIndex = 33944;

	class Foldout : public Il2CppObject
	{
	public:
		::System::Boolean opened; // 0x50
		::System::Boolean isHeader; // 0x51
		Il2CppObject* contextMenuItems; // 0x58
		::Il2CppArray<::System::Object*>* _columnLabels_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _columnTooltips_k__BackingField; // 0x68

		::System::Boolean get_isReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_columnLabels()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_GET_COLUMNLABELS_OFFSET))(nullptr);
		}

		::System::Void set_columnLabels(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_SET_COLUMNLABELS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_columnTooltips()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_GET_COLUMNTOOLTIPS_OFFSET))(nullptr);
		}

		::System::Void set_columnTooltips(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_SET_COLUMNTOOLTIPS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean GetValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_GETVALUE_OFFSET))(nullptr);
		}

		::System::Object* UnityEngine.Rendering.DebugUI.IValueField.GetValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_UNITYENGINE.RENDERING.DEBUGUI.IVALUEFIELD.GETVALUE_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* ValidateValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FOLDOUT_SETVALUE_OFFSET))(arg, nullptr);
		}

	};

