#pragma once
#include "unitysdk.h"

class UILabel;
class NGUIAtlas;
class Alignment;
namespace UnityEngine { class Transform; }
class Pivot;
class UISprite;

#define MXRICHLABEL_CREATELABEL_OFFSET UNITYSDK_OFFSET(0xC151E0)
#define MXRICHLABEL_REFRESH_OFFSET UNITYSDK_OFFSET(0xC157F0)
#define MXRICHLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xC176B0)
#define MXRICHLABEL_PREPARENGUITEXT_OFFSET UNITYSDK_OFFSET(0xC15C10)
#define MXRICHLABEL_CALCSPRITEWIDTH_OFFSET UNITYSDK_OFFSET(0xC178E0)
#define MXRICHLABEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xC158A0)
#define MXRICHLABEL_ONAFTERLAYOUT_OFFSET UNITYSDK_OFFSET(0xC17AB0)
#define MXRICHLABEL_APPLYPIVOTYOFFSET_OFFSET UNITYSDK_OFFSET(0xC17AC0)
#define MXRICHLABEL_GET_LAYOUTALIGNMENT_OFFSET UNITYSDK_OFFSET(0xC181A0)
#define MXRICHLABEL_GET_SPRITEPOOL_OFFSET UNITYSDK_OFFSET(0xC181C0)
#define MXRICHLABEL_GET_REFERENCELABEL_OFFSET UNITYSDK_OFFSET(0xC18370)
#define MXRICHLABEL_PLACEITEM_OFFSET UNITYSDK_OFFSET(0xC18380)
#define MXRICHLABEL_GET_LAYOUTPIVOT_OFFSET UNITYSDK_OFFSET(0xC18590)
#define MXRICHLABEL_BUILDLAYOUT_OFFSET UNITYSDK_OFFSET(0xC167A0)
#define MXRICHLABEL_PARSECHUNKS_OFFSET UNITYSDK_OFFSET(0xC15D70)
#define MXRICHLABEL_REPOSITIONLINE_OFFSET UNITYSDK_OFFSET(0xC185B0)
#define MXRICHLABEL_GET_ORIGINALTEXT_OFFSET UNITYSDK_OFFSET(0xC19440)
#define MXRICHLABEL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC19450)
#define MXRICHLABEL_MAXLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xC18CF0)
#define MXRICHLABEL_FIRSTPOSITIVE_OFFSET UNITYSDK_OFFSET(0xC18D20)
#define MXRICHLABEL_CREATESPRITE_OFFSET UNITYSDK_OFFSET(0xC18A50)
#define MXRICHLABEL_FORMATURLLABELTEXT_OFFSET UNITYSDK_OFFSET(0xC15760)
#define MXRICHLABEL_GET_LABELPOOL_OFFSET UNITYSDK_OFFSET(0xC156E0)
#define MXRICHLABEL_SPLITADDTEXT_OFFSET UNITYSDK_OFFSET(0xC18DD0)
#define MXRICHLABEL_SET_ORIGINALTEXT_OFFSET UNITYSDK_OFFSET(0xC19500)

	inline static constexpr unsigned int MXRichLabel_TypeDefinitionIndex = 8848;

	class MXRichLabel : public Il2CppObject
	{
	public:
		UILabel* _referenceLabel; // 0x18
		NGUIAtlas* _atlas; // 0x20
		::System::Single _spriteOffsetY; // 0x28
		Il2CppObject* OnUrlClick; // 0x30
		::System::String* SpriteOpen; // 0x0
		::System::String* UrlOpen; // 0x0
		::System::String* UrlClose; // 0x0
		::System::String* _originalText; // 0x38
		Il2CppObject* _chunks; // 0x40
		Il2CppObject* _activeLabels; // 0x48
		Il2CppObject* _activeSprites; // 0x50
		Il2CppObject* _labelPool; // 0x58
		Il2CppObject* _spritePool; // 0x60
		::System::Boolean _labelPoolInitialized; // 0x68
		::System::Boolean _spritePoolInitialized; // 0x69
		Il2CppObject* _lineItems; // 0x70
		::System::Int32 _leftWidth; // 0x78
		::System::Single _leftWidthGL; // 0x7C

		UILabel* CreateLabel(::System::String* str, ::System::Boolean arg, ::System::String* str2)
		{
			return ((UILabel*(*)(::System::String*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_CREATELABEL_OFFSET))(str, arg, str2, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareNGUIText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_PREPARENGUITEXT_OFFSET))(nullptr);
		}

		::System::Int32 CalcSpriteWidth(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_CALCSPRITEWIDTH_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnAfterLayout(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_ONAFTERLAYOUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyPivotYOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_APPLYPIVOTYOFFSET_OFFSET))(arg, nullptr);
		}

		Alignment* get_LayoutAlignment()
		{
			return ((Alignment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_GET_LAYOUTALIGNMENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_SpritePool()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_GET_SPRITEPOOL_OFFSET))(nullptr);
		}

		UILabel* get_ReferenceLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_GET_REFERENCELABEL_OFFSET))(nullptr);
		}

		::System::Void PlaceItem(::UnityEngine::Transform* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_PLACEITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Pivot* get_LayoutPivot()
		{
			return ((Pivot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_GET_LAYOUTPIVOT_OFFSET))(nullptr);
		}

		::System::Void BuildLayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_BUILDLAYOUT_OFFSET))(nullptr);
		}

		::System::Void ParseChunks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_PARSECHUNKS_OFFSET))(nullptr);
		}

		::System::Void RepositionLine(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_REPOSITIONLINE_OFFSET))(arg, nullptr);
		}

		::System::String* get_OriginalText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_GET_ORIGINALTEXT_OFFSET))(nullptr);
		}

		::System::Void Initialize(UILabel* arg, NGUIAtlas* arg2)
		{
			((::System::Void(*)(UILabel*, NGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 MaxLineWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_MAXLINEWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 FirstPositive(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_FIRSTPOSITIVE_OFFSET))(arg, nullptr);
		}

		UISprite* CreateSprite(::System::String* str)
		{
			return ((UISprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_CREATESPRITE_OFFSET))(str, nullptr);
		}

		::System::String* FormatUrlLabelText(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_FORMATURLLABELTEXT_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_LabelPool()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_GET_LABELPOOL_OFFSET))(nullptr);
		}

		::System::Void SplitAddText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_SPLITADDTEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_OriginalText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXRICHLABEL_SET_ORIGINALTEXT_OFFSET))(str, nullptr);
		}

	};

