#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define HIDELEMENTDESCRIPTOR_GET_ISRELATIVE_OFFSET UNITYSDK_OFFSET(0x9F44940)
#define HIDELEMENTDESCRIPTOR_DETERMINEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9F436E0)
#define HIDELEMENTDESCRIPTOR_DETERMINEAXISNORMALIZATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9F44950)
#define HIDELEMENTDESCRIPTOR_DETERMINEUSAGES_OFFSET UNITYSDK_OFFSET(0x9F43E50)
#define HIDELEMENTDESCRIPTOR_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x9F44E20)
#define HIDELEMENTDESCRIPTOR_GET_MINFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x9F44CC0)
#define HIDELEMENTDESCRIPTOR_ISUSABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x9F42000)
#define HIDELEMENTDESCRIPTOR_DETERMINENAME_OFFSET UNITYSDK_OFFSET(0x9F43A50)
#define HIDELEMENTDESCRIPTOR_DETERMINEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F43C20)
#define HIDELEMENTDESCRIPTOR_DETERMINELAYOUT_OFFSET UNITYSDK_OFFSET(0x9F43990)
#define HIDELEMENTDESCRIPTOR_GET_MAXFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x9F44D70)
#define HIDELEMENTDESCRIPTOR_GET_HASPREFERREDSTATE_OFFSET UNITYSDK_OFFSET(0x9F44E30)
#define HIDELEMENTDESCRIPTOR_GET_ISWRAPPING_OFFSET UNITYSDK_OFFSET(0x9F44E40)
#define HIDELEMENTDESCRIPTOR_ADDCHILDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9F44040)
#define HIDELEMENTDESCRIPTOR_DETERMINEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x9F43920)
#define HIDELEMENTDESCRIPTOR_GET_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x9F43850)
#define HIDELEMENTDESCRIPTOR_GET_ISNONLINEAR_OFFSET UNITYSDK_OFFSET(0x9F44E50)
#define HIDELEMENTDESCRIPTOR_DETERMINEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9F43860)
#define HIDELEMENTDESCRIPTOR_GET_HASNULLSTATE_OFFSET UNITYSDK_OFFSET(0x9F44E60)
#define HIDELEMENTDESCRIPTOR_IS_OFFSET UNITYSDK_OFFSET(0x9F43980)
#define HIDELEMENTDESCRIPTOR_GET_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x9F44E70)
#define HIDELEMENTDESCRIPTOR_DETERMINEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F43CF0)

	inline static constexpr unsigned int HIDElementDescriptor_TypeDefinitionIndex = 28661;

	class HIDElementDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 usage; // 0x10
		UsagePage* usagePage; // 0x14
		::System::Int32 unit; // 0x18
		::System::Int32 unitExponent; // 0x1C
		::System::Int32 logicalMin; // 0x20
		::System::Int32 logicalMax; // 0x24
		::System::Int32 physicalMin; // 0x28
		::System::Int32 physicalMax; // 0x2C
		HIDReportType* reportType; // 0x30
		::System::Int32 collectionIndex; // 0x34
		::System::Int32 reportId; // 0x38
		::System::Int32 reportSizeInBits; // 0x3C
		::System::Int32 reportOffsetInBits; // 0x40
		HIDElementFlags* flags; // 0x44
		Il2CppObject* usageMin; // 0x48
		Il2CppObject* usageMax; // 0x50

		::System::Boolean get_isRelative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_ISRELATIVE_OFFSET))(nullptr);
		}

		::System::String* DetermineParameters()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEPARAMETERS_OFFSET))(nullptr);
		}

		::System::String* DetermineAxisNormalizationParameters()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEAXISNORMALIZATIONPARAMETERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DetermineUsages()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEUSAGES_OFFSET))(nullptr);
		}

		::System::Boolean get_isArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Single get_minFloatValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_MINFLOATVALUE_OFFSET))(nullptr);
		}

		::System::Boolean IsUsableElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_ISUSABLEELEMENT_OFFSET))(nullptr);
		}

		::System::String* DetermineName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINENAME_OFFSET))(nullptr);
		}

		::System::String* DetermineDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEDISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* DetermineLayout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINELAYOUT_OFFSET))(nullptr);
		}

		::System::Single get_maxFloatValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_MAXFLOATVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasPreferredState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_HASPREFERREDSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_isWrapping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_ISWRAPPING_OFFSET))(nullptr);
		}

		::System::Void AddChildControls(HIDElementDescriptor&* arg, ::System::String* str, Builder&* arg)
		{
			((::System::Void(*)(HIDElementDescriptor&*, ::System::String*, Builder&*, ::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_ADDCHILDCONTROLS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* DetermineProcessors()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEPROCESSORS_OFFSET))(nullptr);
		}

		::System::Boolean get_isSigned()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_ISSIGNED_OFFSET))(nullptr);
		}

		::System::Boolean get_isNonLinear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_ISNONLINEAR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue* DetermineDefaultState()
		{
			return (return (::UnityEngine::InputSystem::Utilities::PrimitiveValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEDEFAULTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasNullState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_HASNULLSTATE_OFFSET))(nullptr);
		}

		::System::Boolean Is(UsagePage* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(UsagePage*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_IS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_GET_ISCONSTANT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* DetermineFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDELEMENTDESCRIPTOR_DETERMINEFORMAT_OFFSET))(nullptr);
		}

	};

