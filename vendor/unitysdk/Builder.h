#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define BUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F707D0)
#define BUILDER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9F707E0)
#define BUILDER_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F707F0)
#define BUILDER_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F70800)
#define BUILDER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F70810)
#define BUILDER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F70820)
#define BUILDER_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F70830)
#define BUILDER_SET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F70840)
#define BUILDER_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F70850)
#define BUILDER_SET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F70860)
#define BUILDER_GET_EXTENDSLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F70870)
#define BUILDER_SET_EXTENDSLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F70880)
#define BUILDER_GET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x9F708C0)
#define BUILDER_SET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x9F708D0)
#define BUILDER_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x9F708E0)
#define BUILDER_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x9F70940)
#define BUILDER_WITHNAME_OFFSET UNITYSDK_OFFSET(0x9F70B40)
#define BUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F70B60)
#define BUILDER_WITHTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUILDER_WITHFORMAT_OFFSET UNITYSDK_OFFSET(0x9F70B80)
#define BUILDER_WITHFORMAT_OFFSET UNITYSDK_OFFSET(0x9F70B90)
#define BUILDER_WITHSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F70BC0)
#define BUILDER_EXTEND_OFFSET UNITYSDK_OFFSET(0x9F70BD0)
#define BUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x9F70C10)
#define BUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F70EF0)

	inline static constexpr unsigned int Builder_TypeDefinitionIndex = 28851;

	class Builder : public Il2CppObject
	{
	public:
		::System::String* _name_k__BackingField; // 0x10
		::System::String* _displayName_k__BackingField; // 0x18
		::System::Type* _type_k__BackingField; // 0x20
		::UnityEngine::InputSystem::Utilities::FourCC* _stateFormat_k__BackingField; // 0x28
		::System::Int32 _stateSizeInBytes_k__BackingField; // 0x2C
		::System::String* m_ExtendsLayout; // 0x30
		Il2CppObject* _updateBeforeRender_k__BackingField; // 0x38
		::System::Int32 m_ControlCount; // 0x3C
		::Il2CppArray<::System::Object*>* m_Controls; // 0x40

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Type* get_type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_stateFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_STATEFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_STATEFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_stateSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_STATESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Void set_stateSizeInBytes(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_STATESIZEINBYTES_OFFSET))(arg, nullptr);
		}

		::System::String* get_extendsLayout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_EXTENDSLAYOUT_OFFSET))(nullptr);
		}

		::System::Void set_extendsLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_EXTENDSLAYOUT_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_updateBeforeRender()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_UPDATEBEFORERENDER_OFFSET))(nullptr);
		}

		::System::Void set_updateBeforeRender(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_SET_UPDATEBEFORERENDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_controls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_GET_CONTROLS_OFFSET))(nullptr);
		}

		ControlBuilder* AddControl(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_ADDCONTROL_OFFSET))(str, nullptr);
		}

		Builder* WithName(::System::String* str)
		{
			return (return (Builder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_WITHNAME_OFFSET))(str, nullptr);
		}

		Builder* WithDisplayName(::System::String* str)
		{
			return (return (Builder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_WITHDISPLAYNAME_OFFSET))(str, nullptr);
		}

		Builder* WithType()
		{
			return (return (Builder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_WITHTYPE_OFFSET))(nullptr);
		}

		Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (Builder*(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_WITHFORMAT_OFFSET))(arg, nullptr);
		}

		Builder* WithFormat(::System::String* str)
		{
			return (return (Builder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_WITHFORMAT_OFFSET))(str, nullptr);
		}

		Builder* WithSizeInBytes(::System::Int32 arg)
		{
			return (return (Builder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_WITHSIZEINBYTES_OFFSET))(arg, nullptr);
		}

		Builder* Extend(::System::String* str)
		{
			return (return (Builder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BUILDER_EXTEND_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* Build()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_BUILD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUILDER_.CTOR_OFFSET))(nullptr);
		}

	};

